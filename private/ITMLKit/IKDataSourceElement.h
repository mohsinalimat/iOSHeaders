//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKElementChangeSet, NSArray;
@protocol IKDataSourceElementImplementing;

@interface IKDataSourceElement : IKViewElement
{
    struct {
        _Bool hasDidLoadBinding;
        _Bool hasDoKeysAffectingChildren;
        _Bool hasDoKeysAffectingSubtree;
        _Bool hasAdditionalKeysToResolve;
        _Bool hasApplyValueForKey;
        _Bool hasDidResolveKeys;
    } _implFlags;
    _Bool _areItemsBound;
    NSArray *_autoHighlightedChildElements;
    long long _autoHighlightIndex;
    id <IKDataSourceElementImplementing> _impl;
}

@property(readonly, nonatomic) id <IKDataSourceElementImplementing> impl; // @synthesize impl=_impl;
@property(nonatomic) long long autoHighlightIndex; // @synthesize autoHighlightIndex=_autoHighlightIndex;
@property(copy, nonatomic) NSArray *autoHighlightedChildElements; // @synthesize autoHighlightedChildElements=_autoHighlightedChildElements;
- (void).cxx_destruct;
- (_Bool)areItemsBound;
- (void)appDocumentDidMarkStylesDirty;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (_Bool)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (_Bool)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (_Bool)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (void)unloadIndex:(long long)arg1;
- (id)elementForItemAtIndex:(long long)arg1 loadIfNeeded:(_Bool)arg2;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
@property(readonly, nonatomic) IKElementChangeSet *itemsChangeset;
@property(readonly, nonatomic) NSArray *prototypes;
- (void)resetProperty:(unsigned long long)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)lastItemElement;
- (id)firstItemElement;

@end

