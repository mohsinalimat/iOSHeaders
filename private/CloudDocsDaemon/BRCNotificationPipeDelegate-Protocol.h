//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCAppLibrary, BRCNotificationPipe;

@protocol BRCNotificationPipeDelegate <NSObject>
- (void)notificationPipe:(BRCNotificationPipe *)arg1 didObserveAppLibrary:(BRCAppLibrary *)arg2;
- (void)notificationPipe:(BRCNotificationPipe *)arg1 willObserveAppLibrary:(BRCAppLibrary *)arg2;
@end

