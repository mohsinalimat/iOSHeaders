//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

#import <OfficeImport/OADDrawableContainer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer>
{
    struct CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}

@property(readonly, copy) NSString *description;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)children;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
- (id)groupProperties;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

