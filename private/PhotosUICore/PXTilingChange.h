//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PXTilingLayout;

@interface PXTilingChange : NSObject
{
    NSMutableArray *_events;
    PXTilingLayout *_initialLayout;
    NSArray *_compositionInvalidationContexts;
    struct CGSize _initialReferenceSize;
    struct UIEdgeInsets _initialContentInset;
}

@property(readonly, copy, nonatomic) NSArray *compositionInvalidationContexts; // @synthesize compositionInvalidationContexts=_compositionInvalidationContexts;
@property(readonly, nonatomic) struct UIEdgeInsets initialContentInset; // @synthesize initialContentInset=_initialContentInset;
@property(readonly, nonatomic) struct CGSize initialReferenceSize; // @synthesize initialReferenceSize=_initialReferenceSize;
@property(readonly, nonatomic) PXTilingLayout *initialLayout; // @synthesize initialLayout=_initialLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *invalidationContexts;
- (id)defaultAnimationOptionsForTilingController:(id)arg1;
@property(readonly, nonatomic) _Bool coordinateSpaceDidChange;
@property(readonly, nonatomic) struct UIEdgeInsets toContentInset;
@property(readonly, nonatomic) struct UIEdgeInsets fromContentInset;
@property(readonly, nonatomic) struct CGSize toReferenceSize;
@property(readonly, nonatomic) struct CGSize fromReferenceSize;
@property(readonly, nonatomic) PXTilingLayout *toLayout;
@property(readonly, nonatomic) PXTilingLayout *fromLayout;
- (id)description;
@property(readonly, nonatomic) NSArray *events;
- (void)addEvent:(id)arg1;
- (void)recordCompositionInvalidationContexts:(id)arg1;
- (void)recordContentInset:(struct UIEdgeInsets)arg1;
- (void)recordReferenceSize:(struct CGSize)arg1;
- (void)recordLayout:(id)arg1;
@property(readonly, nonatomic, getter=isIdentity) _Bool identity;
- (id)init;

@end

