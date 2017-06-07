//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKAbstractAlert.h>

#import <TSReading/UIActionSheetDelegate-Protocol.h>

@class NSString, UIActionSheet, UIView;

@interface TSKUIActionSheet : TSKAbstractAlert <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
    UIView *_targetView;
}

+ (id)alertWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;
- (void)willPresentActionSheet:(id)arg1;
- (void)didPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (long long)firstOtherButtonIndex;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (long long)numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)showAlert;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

