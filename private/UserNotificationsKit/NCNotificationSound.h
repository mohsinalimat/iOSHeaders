//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCNotificationSound : NSObject <BSDescriptionProviding>
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    NSDictionary *_vibrationPattern;
    _Bool _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    NSString *_songPath;
    TLAlertConfiguration *_alertConfiguration;
}

@property(readonly, copy, nonatomic) TLAlertConfiguration *alertConfiguration; // @synthesize alertConfiguration=_alertConfiguration;
@property(readonly, copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(readonly, copy, nonatomic) NSDictionary *controllerAttributes; // @synthesize controllerAttributes=_controllerAttributes;
@property(readonly, nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(readonly, nonatomic, getter=isRepeating) _Bool repeats; // @synthesize repeats=_repeats;
@property(readonly, copy, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(readonly, copy, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(readonly, nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(readonly, nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNotificationSound:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

