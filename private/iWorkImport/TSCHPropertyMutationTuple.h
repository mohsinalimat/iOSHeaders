//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol TSCHStyleOwning;

__attribute__((visibility("hidden")))
@interface TSCHPropertyMutationTuple : NSObject
{
    id <TSCHStyleOwning> mStyleOwner;
    NSDictionary *mMutations;
}

@property(readonly) NSDictionary *mutations; // @synthesize mutations=mMutations;
@property(readonly) id <TSCHStyleOwning> styleOwner; // @synthesize styleOwner=mStyleOwner;
- (id)description;
- (void)dealloc;
- (id)initWithStyleOwner:(id)arg1 mutationMap:(id)arg2;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)styleOwnerRef;
- (id)indirectTuple;

@end

