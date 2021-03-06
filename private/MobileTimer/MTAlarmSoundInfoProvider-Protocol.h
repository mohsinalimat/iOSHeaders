//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol MTAlarmSoundInfoProvider <NSObject>
@property(copy, nonatomic) NSString *vibrationID;
@property(readonly, nonatomic) long long alarmSoundType;
@property(readonly, nonatomic) NSString *alarmSoundIdentifier;
@property(copy, nonatomic) NSNumber *alarmSoundVolume;
- (void)setAlarmSoundIdentifier:(NSString *)arg1 ofType:(long long)arg2;
@end

