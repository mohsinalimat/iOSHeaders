//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSArray, NSMutableArray, NSSet, NSString;
@protocol IKEntityValueProviding, NSCopying, SKUIEntityProviding;

@interface SKUIViewElement : IKViewElement
{
    id <SKUIEntityProviding> _entityProvider;
    id <IKEntityValueProviding> _entityValueProvider;
    NSMutableArray *_flattenedChildren;
    _Bool _hasValidEntityProvider;
    long long _pinStyle;
    id <IKEntityValueProviding> _explicitEntityValueProvider;
}

@property(retain, nonatomic) id <IKEntityValueProviding> explicitEntityValueProvider; // @synthesize explicitEntityValueProvider=_explicitEntityValueProvider;
@property(readonly, nonatomic) long long pinStyle; // @synthesize pinStyle=_pinStyle;
- (void).cxx_destruct;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_entityValueProviderDidChange;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) id <NSCopying> uniquingMapKey;
@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
@property(readonly, nonatomic) _Bool rendersWithParallax;
@property(readonly, nonatomic) _Bool rendersWithPerspective;
@property(readonly, nonatomic) NSSet *personalizationLibraryItems;
@property(readonly, nonatomic) long long pageComponentType;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isDynamicContainer) _Bool dynamicContainer;
@property(readonly, nonatomic) NSArray *flattenedChildren;
- (id)firstChildForElementName:(id)arg1;
- (id)firstChildForElementType:(unsigned long long)arg1;
- (id)featureWithName:(id)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *entityValueProperties;
@property(readonly, nonatomic) id <SKUIEntityProviding> explicitEntityProvider;
- (void)entityValueProviderDidChange;
@property(readonly, nonatomic) id <SKUIEntityProviding> entityProvider;
- (id)elementWithIdentifier:(id)arg1;
- (_Bool)isDescendentFromViewElement:(id)arg1;
- (id)persistenceKey;
- (_Bool)descendsFromElementWithType:(unsigned long long)arg1;
- (id)ancestorElementOfType:(unsigned long long)arg1;
- (id)ancestorElementMatchingPredicate:(CDUnknownBlockType)arg1;
- (_Bool)canMoveWithinCollection;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
@property(readonly, copy, nonatomic) NSString *indexBarEntryID;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (_Bool)handlesBackgroundColorDirectly;
- (id)expandableLabelElementForWidth:(double)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, retain, nonatomic) NSString *itmlID; // @dynamic itmlID;

@end

