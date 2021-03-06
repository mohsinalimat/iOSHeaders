//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_endTimes;
    NSMutableDictionary *_startTimes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)endTimes;
- (id)startTimes;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

