//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CLKNotificationCenterRegistration : NSObject
{
    unsigned long long _registrationIdentifier;
    id _observer;
    SEL _selector;
}

+ (id)recycledRegistrationWithIdentifier:(unsigned long long)arg1;
+ (void)recycleRegistration:(id)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)recycledCopy;

@end

