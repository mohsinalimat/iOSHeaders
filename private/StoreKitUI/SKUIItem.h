//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>
#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIItemOffer, SKUIStoreIdentifier, UIImage;
@protocol SKUIArtworkProviding;

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider>
{
    struct _NSRange _ageBandRange;
    NSString *_artistName;
    NSString *_bundleID;
    NSString *_categoryName;
    NSString *_collectionName;
    unsigned long long _deviceFamilies;
    NSString *_editorialBage;
    NSString *_feedUrlString;
    long long _itemIdentifier;
    long long _itemKind;
    NSString *_itemKindString;
    SKUIItemOffer *_itemOffer;
    _Bool _newsstandApp;
    _Bool _hasInAppPurchases;
    long long _newsstandBindingEdge;
    long long _newsstandBindingType;
    long long _numberOfChildItems;
    long long _numberOfUserRatings;
    long long _parentalControlsRank;
    _Bool _prerenderedArtwork;
    NSString *_productPageURLString;
    NSArray *_requiredCapabilities;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_title;
    float _userRating;
    long long _versionIdentifier;
    NSString *_versionString;
    NSArray *_videos;
    _Bool _hasMessagesExtension;
    _Bool _isHiddenFromSpringBoard;
    _Bool _gameControllerSupported;
    _Bool _requiresGameController;
    id <SKUIArtworkProviding> _artworksProvider;
    NSString *_editorialBadge;
    id <SKUIArtworkProviding> _newsstandArtworks;
}

@property(readonly, nonatomic) id <SKUIArtworkProviding> newsstandArtworks; // @synthesize newsstandArtworks=_newsstandArtworks;
@property(readonly, nonatomic) long long newsstandBindingType; // @synthesize newsstandBindingType=_newsstandBindingType;
@property(readonly, nonatomic) long long newsstandBindingEdge; // @synthesize newsstandBindingEdge=_newsstandBindingEdge;
@property(readonly, nonatomic, getter=isNewsstandApp) _Bool newsstandApp; // @synthesize newsstandApp=_newsstandApp;
@property(readonly, nonatomic) _Bool requiresGameController; // @synthesize requiresGameController=_requiresGameController;
@property(readonly, nonatomic) _Bool gameControllerSupported; // @synthesize gameControllerSupported=_gameControllerSupported;
@property(readonly, nonatomic) _Bool isHiddenFromSpringBoard; // @synthesize isHiddenFromSpringBoard=_isHiddenFromSpringBoard;
@property(readonly, nonatomic) _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(readonly, nonatomic) _Bool hasInAppPurchases; // @synthesize hasInAppPurchases=_hasInAppPurchases;
@property(readonly, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) long long versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) NSString *productPageURLString; // @synthesize productPageURLString=_productPageURLString;
@property(readonly, nonatomic) long long parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
@property(readonly, nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(readonly, nonatomic) NSString *itemKindString; // @synthesize itemKindString=_itemKindString;
@property(readonly, nonatomic) long long itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *editorialBadge; // @synthesize editorialBadge=_editorialBadge;
@property(readonly, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic, getter=hasPrerenderedArtwork) _Bool prerenderedArtwork; // @synthesize prerenderedArtwork=_prerenderedArtwork;
@property(readonly, nonatomic) unsigned long long deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(readonly, nonatomic) long long numberOfChildItems; // @synthesize numberOfChildItems=_numberOfChildItems;
@property(readonly, nonatomic) id <SKUIArtworkProviding> artworksProvider; // @synthesize artworksProvider=_artworksProvider;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) struct _NSRange ageBandRange; // @synthesize ageBandRange=_ageBandRange;
@property(readonly, nonatomic) SKUIItemOffer *primaryItemOffer; // @synthesize primaryItemOffer=_itemOffer;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
- (void).cxx_destruct;
- (id)valueForMetricsField:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_setHasInAppPurchases:(_Bool)arg1;
@property(readonly, nonatomic) NSString *_downloadKind;
- (id)lookupDictionary;
- (void)addItemOfferParameterWithName:(id)arg1 value:(id)arg2;
- (void)setItemKind:(long long)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) NSArray *loadedChildItems;
@property(readonly, nonatomic) NSURL *largestArtworkURL;
@property(readonly, nonatomic) NSArray *childItemIdentifiers;
- (id)childItemForIdentifier:(id)arg1;
@property(readonly, nonatomic) UIImage *artworkImage;
- (id)artworkURLForSize:(long long)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initContainerItemWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

