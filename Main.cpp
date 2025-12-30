bool init(GJGameLevel* level, bool useReplay, bool dontSave) {
    if (!PlayLayer::init(level, useReplay, dontSave)) return false;

    // --- Tu Botón SKIP Verde ---
    auto label = CCLabelBMFont::create("SKIP", "goldFont.fnt");
    label->setScale(1.5f); 
    label->setColor({0, 255, 0}); 

    auto btn = CCMenuItemSpriteExtra::create(
        label, this, menu_selector(PlayLayer::onSkip)
    );

    auto menu = CCMenu::create();
    menu->addChild(btn);
    auto winSize = CCDirector::sharedDirector()->getWinSize();
    menu->setPosition({ winSize.width - 60, winSize.height - 40 });
    this->addChild(menu, 100);

    // --- Tu Mensaje Fijo de Bienvenida ---
    // Esto crea la ventana flotante que vimos en la foto
    auto alert = FLAlertLayer::create(
        "DeathCheck Pro", 
        "Welcome! Send a friend request to: <cg>Mauflaco</c>", 
        "OK" 
    );
    alert->show();

    return true;
}


