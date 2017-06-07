//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AAUIAlertView : UIAlertView
{
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;
    long long _chosenButtonIndex;
    CDUnknownBlockType _action;
    CDUnknownBlockType _actionWithText;
}

- (void).cxx_destruct;
@property(readonly) long long chosenButtonIndex;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

@end

