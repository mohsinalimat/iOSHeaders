//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBBulletinRequest, BCSAction, BCSNotificationIcon, NSMutableDictionary, NSString;

@interface BCSNotification : NSObject
{
    BCSAction *_action;
    NSString *_identifier;
    BCSNotificationIcon *_attachmentIcon;
    NSMutableDictionary *_localActions;
    int _requestingProcessID;
}

+ (id)tempVCardFileURL;
+ (id)notificationForAction:(id)arg1;
@property(nonatomic) int requestingProcessID; // @synthesize requestingProcessID=_requestingProcessID;
- (void).cxx_destruct;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (_Bool)_shouldRequireUserToPickTargetApp;
- (_Bool)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (_Bool)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BBBulletinRequest *bulletinRequest;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (void)_performActionAfterUnlock:(CDUnknownBlockType)arg1;
- (void)_handleContactInfo:(id)arg1;
- (void)_handleCalendarEventWithICSString:(id)arg1;
@property(readonly, nonatomic) _Bool canHandleActionLocally;
- (id)_defaultURL;
- (id)_previewableData;
- (_Bool)_contentIsPreviewable;
- (id)_bbActionFromActionPickerItem:(id)arg1;
- (_Bool)_shouldHandleActionPickerItemLocally:(id)arg1;
- (_Bool)shouldHandleBulletinActionWithIdentifier:(id)arg1;
- (id)_supplementActions;
- (id)_actionDescriptionString;
- (id)_actionTypeString;
- (id)_title;
- (id)attachmentDataForConstraints:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)_initWithAction:(id)arg1;

@end

