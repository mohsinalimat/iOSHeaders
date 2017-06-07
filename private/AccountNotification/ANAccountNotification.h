//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountNotification/NSSecureCoding-Protocol.h>

@class ANNotificationAction, NSDate, NSDictionary, NSString;

@interface ANAccountNotification : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_accountTypeID;
    NSString *_title;
    NSString *_message;
    NSDate *_date;
    NSString *_activateButtonTitle;
    NSString *_dismissButtonTitle;
    ANNotificationAction *_activateAction;
    ANNotificationAction *_dismissAction;
    ANNotificationAction *_clearAction;
    NSDictionary *_userInfo;
    NSString *_eventIdentifier;
    long long _destinations;
    long long _sectionSubtype;
    NSString *_callbackMachService;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *callbackMachService; // @synthesize callbackMachService=_callbackMachService;
@property(nonatomic) long long sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(nonatomic) long long destinations; // @synthesize destinations=_destinations;
@property(copy, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) ANNotificationAction *clearAction; // @synthesize clearAction=_clearAction;
@property(retain, nonatomic) ANNotificationAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) ANNotificationAction *activateAction; // @synthesize activateAction=_activateAction;
@property(copy, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(copy, nonatomic) NSString *activateButtonTitle; // @synthesize activateButtonTitle=_activateButtonTitle;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *accountTypeID; // @synthesize accountTypeID=_accountTypeID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedObject:(id)arg1;
- (id)initForAccountWithType:(id)arg1;

@end

