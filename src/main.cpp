#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;
class $modify(MyMenuLayer, MenuLayer) {

	bool init() {
		if (!MenuLayer::init()) return false;

		CCMenu* m_mainMenu = as<CCMenu*>(this->getChildByID("main-menu"));
		as<CCNode*>(m_mainMenu->getChildByID("play-button"))->removeFromParent();

		AxisLayout* menuLayout = as<AxisLayout*>(m_mainMenu->getLayout());
		menuLayout->setGap(13.5);
		m_mainMenu->updateLayout();
		return true;
	}
};
