//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _HKFitnessFriend, _HKFitnessFriendActivitySnapshot;

@interface FFFriendListRow : NSObject
{
    _HKFitnessFriend *_fitnessFriend;
    _HKFitnessFriendActivitySnapshot *_snapshot;
}

@property(retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) _HKFitnessFriend *fitnessFriend; // @synthesize fitnessFriend=_fitnessFriend;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

