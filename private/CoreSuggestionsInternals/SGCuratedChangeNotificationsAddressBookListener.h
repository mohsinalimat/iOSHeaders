//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>

@protocol NSObject;

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener
{
    id <NSObject> _notificationCenterToken;
}

- (void).cxx_destruct;
- (void)stopListening;
- (void)startListening;

@end

