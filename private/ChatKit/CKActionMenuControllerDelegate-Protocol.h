//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKActionMenuController;

@protocol CKActionMenuControllerDelegate <NSObject>

@optional
- (void)actionMenuControllerDidDismissActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerDidPresentActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(CKActionMenuController *)arg1 animated:(_Bool)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(CKActionMenuController *)arg1 animated:(_Bool)arg2;
@end

