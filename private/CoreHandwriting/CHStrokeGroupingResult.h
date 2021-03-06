//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying>
{
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_strokeGroupsSortedTopBottomLeftRightRespectingWritingOrientation;
    NSSet *_strokeGroups;
    NSSet *_createdStrokeGroups;
    NSSet *_deletedStrokeGroups;
}

@property(readonly, copy, nonatomic) NSSet *deletedStrokeGroups; // @synthesize deletedStrokeGroups=_deletedStrokeGroups;
@property(readonly, copy, nonatomic) NSSet *createdStrokeGroups; // @synthesize createdStrokeGroups=_createdStrokeGroups;
@property(readonly, copy, nonatomic) NSSet *strokeGroups; // @synthesize strokeGroups=_strokeGroups;
@property(readonly, copy, nonatomic) NSArray *strokeGroupsSortedByWritingOrientation;
@property(readonly, copy, nonatomic) NSArray *strokeGroupsSortedTopBottomLeftRight;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (id)init;

@end

