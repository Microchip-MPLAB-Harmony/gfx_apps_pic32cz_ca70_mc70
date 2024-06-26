#include "gfx/legato/generated/screen/le_gen_screen_Screen2.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen2_PanelWidget0;
leImageWidget* Screen2_ImageWidget1;
leLabelWidget* Screen2_LabelWidget0;
leLabelWidget* Screen2_LabelWidget1;
leLabelWidget* Screen2_LabelWidget3;
leLabelWidget* Screen2_LabelWidget4;
leLabelWidget* Screen2_LabelWidget5;
leButtonWidget* Screen2_ButtonWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen2(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen2(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Screen2_PanelWidget0 = leWidget_New();
    Screen2_PanelWidget0->fn->setPosition(Screen2_PanelWidget0, 0, 0);
    Screen2_PanelWidget0->fn->setSize(Screen2_PanelWidget0, 480, 272);
    Screen2_PanelWidget0->fn->setScheme(Screen2_PanelWidget0, &WhiteBackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)Screen2_PanelWidget0);

    Screen2_ImageWidget1 = leImageWidget_New();
    Screen2_ImageWidget1->fn->setPosition(Screen2_ImageWidget1, 291, 16);
    Screen2_ImageWidget1->fn->setSize(Screen2_ImageWidget1, 170, 165);
    Screen2_ImageWidget1->fn->setBackgroundType(Screen2_ImageWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen2_ImageWidget1->fn->setBorderType(Screen2_ImageWidget1, LE_WIDGET_BORDER_NONE);
    Screen2_ImageWidget1->fn->setImage(Screen2_ImageWidget1, (leImage*)&MHGSLogo);
    root0->fn->addChild(root0, (leWidget*)Screen2_ImageWidget1);

    Screen2_LabelWidget0 = leLabelWidget_New();
    Screen2_LabelWidget0->fn->setPosition(Screen2_LabelWidget0, 14, 36);
    Screen2_LabelWidget0->fn->setSize(Screen2_LabelWidget0, 234, 31);
    Screen2_LabelWidget0->fn->setBackgroundType(Screen2_LabelWidget0, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget0->fn->setString(Screen2_LabelWidget0, (leString*)&string_String_Demonstrated);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget0);

    Screen2_LabelWidget1 = leLabelWidget_New();
    Screen2_LabelWidget1->fn->setPosition(Screen2_LabelWidget1, 13, 75);
    Screen2_LabelWidget1->fn->setSize(Screen2_LabelWidget1, 242, 40);
    Screen2_LabelWidget1->fn->setBackgroundType(Screen2_LabelWidget1, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget1->fn->setString(Screen2_LabelWidget1, (leString*)&string_String_Device);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget1);

    Screen2_LabelWidget3 = leLabelWidget_New();
    Screen2_LabelWidget3->fn->setPosition(Screen2_LabelWidget3, 13, 147);
    Screen2_LabelWidget3->fn->setSize(Screen2_LabelWidget3, 360, 40);
    Screen2_LabelWidget3->fn->setBackgroundType(Screen2_LabelWidget3, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget3->fn->setString(Screen2_LabelWidget3, (leString*)&string_String_ColorDepth);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget3);

    Screen2_LabelWidget4 = leLabelWidget_New();
    Screen2_LabelWidget4->fn->setPosition(Screen2_LabelWidget4, 13, 112);
    Screen2_LabelWidget4->fn->setSize(Screen2_LabelWidget4, 290, 40);
    Screen2_LabelWidget4->fn->setBackgroundType(Screen2_LabelWidget4, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget4->fn->setString(Screen2_LabelWidget4, (leString*)&string_String_Library);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget4);

    Screen2_LabelWidget5 = leLabelWidget_New();
    Screen2_LabelWidget5->fn->setPosition(Screen2_LabelWidget5, 13, 184);
    Screen2_LabelWidget5->fn->setSize(Screen2_LabelWidget5, 430, 40);
    Screen2_LabelWidget5->fn->setBackgroundType(Screen2_LabelWidget5, LE_WIDGET_BACKGROUND_NONE);
    Screen2_LabelWidget5->fn->setString(Screen2_LabelWidget5, (leString*)&string_String_Features);
    root0->fn->addChild(root0, (leWidget*)Screen2_LabelWidget5);

    Screen2_ButtonWidget0 = leButtonWidget_New();
    Screen2_ButtonWidget0->fn->setPosition(Screen2_ButtonWidget0, 258, 220);
    Screen2_ButtonWidget0->fn->setSize(Screen2_ButtonWidget0, 213, 45);
    Screen2_ButtonWidget0->fn->setScheme(Screen2_ButtonWidget0, &WhiteBackgroundScheme);
    Screen2_ButtonWidget0->fn->setString(Screen2_ButtonWidget0, (leString*)&string_String_PressHere);
    Screen2_ButtonWidget0->fn->setReleasedEventCallback(Screen2_ButtonWidget0, event_Screen2_ButtonWidget0_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen2_ButtonWidget0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen2(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Screen2(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen2_PanelWidget0 = NULL;
    Screen2_ImageWidget1 = NULL;
    Screen2_LabelWidget0 = NULL;
    Screen2_LabelWidget1 = NULL;
    Screen2_LabelWidget3 = NULL;
    Screen2_LabelWidget4 = NULL;
    Screen2_LabelWidget5 = NULL;
    Screen2_ButtonWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen2(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen2(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

