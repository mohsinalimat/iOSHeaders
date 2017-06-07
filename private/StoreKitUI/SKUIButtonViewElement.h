//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class IKDOMElement, IKViewElementStyle, NSString, SKUIBuyButtonDescriptor, SKUIImageViewElement, SKUIStoreIdentifier, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement
{
    NSString *_badgeResourceName;
    _Bool _bigHitButton;
    double _bigHitSize;
    SKUIViewElementText *_buttonText;
    long long _buttonViewType;
    NSString *_bundleIdentifier;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    NSString *_confirmationText;
    long long _dataPlaybackId;
    _Bool _disabledButSelectable;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_nonToggledText;
    _Bool _selected;
    _Bool _showOnDemand;
    SKUIStoreIdentifier *_storeIdentifier;
    _Bool _toggled;
    NSString *_toggledText;
    NSString *_toggleItemIdentfier;
    NSString *_variantIdentifier;
    IKDOMElement *_xml;
    _Bool _autoIncrementCount;
    _Bool _suppressCloudRestore;
    long long _buttonViewSubType;
    NSString *_playItemIdentifier;
    NSString *_sizeVariant;
    NSString *_toggleItemIdentifier;
}

@property(retain, nonatomic) SKUIBuyButtonDescriptor *buyButtonDescriptor; // @synthesize buyButtonDescriptor=_buyButtonDescriptor;
@property(readonly, nonatomic) _Bool suppressCloudRestore; // @synthesize suppressCloudRestore=_suppressCloudRestore;
@property(nonatomic, getter=isToggled) _Bool toggled; // @synthesize toggled=_toggled;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic, getter=isDisabledButSelectable) _Bool disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property(readonly, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;
@property(readonly, nonatomic) NSString *toggleItemIdentifier; // @synthesize toggleItemIdentifier=_toggleItemIdentifier;
@property(readonly, nonatomic) _Bool showOnDemand; // @synthesize showOnDemand=_showOnDemand;
@property(readonly, nonatomic) NSString *sizeVariant; // @synthesize sizeVariant=_sizeVariant;
@property(readonly, nonatomic) NSString *playItemIdentifier; // @synthesize playItemIdentifier=_playItemIdentifier;
@property(readonly, nonatomic) long long dataPlaybackId; // @synthesize dataPlaybackId=_dataPlaybackId;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) SKUIStoreIdentifier *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *badgeResourceName; // @synthesize badgeResourceName=_badgeResourceName;
@property(readonly, nonatomic) NSString *toggledText; // @synthesize toggledText=_toggledText;
@property(readonly, nonatomic) NSString *nonToggledText; // @synthesize nonToggledText=_nonToggledText;
@property(readonly, nonatomic) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property(readonly, nonatomic) long long buttonViewSubType; // @synthesize buttonViewSubType=_buttonViewSubType;
@property(readonly, nonatomic) long long buttonViewType; // @synthesize buttonViewType=_buttonViewType;
@property(readonly, nonatomic) double bigHitSize; // @synthesize bigHitSize=_bigHitSize;
@property(readonly, nonatomic, getter=isBigHitButton) _Bool bigHitButton; // @synthesize bigHitButton=_bigHitButton;
@property(readonly, nonatomic) _Bool autoIncrementCount; // @synthesize autoIncrementCount=_autoIncrementCount;
- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)personalizationLibraryItems;
- (long long)pageComponentType;
- (_Bool)isEnabled;
- (unsigned long long)elementType;
- (id)description;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) IKViewElementStyle *buttonTitleStyle;
@property(readonly, nonatomic) SKUIViewElementText *buttonText;
@property(readonly, nonatomic) SKUIImageViewElement *additionalButtonImage;
@property(readonly, nonatomic) SKUIImageViewElement *buttonImage;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

