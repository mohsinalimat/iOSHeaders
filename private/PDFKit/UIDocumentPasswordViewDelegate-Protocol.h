//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIDocumentPasswordView, UITextField;

@protocol UIDocumentPasswordViewDelegate
- (void)userDidEnterPassword:(NSString *)arg1 forPasswordView:(UIDocumentPasswordView *)arg2;

@optional
- (void)didEndEditingPassword:(UITextField *)arg1 inView:(UIDocumentPasswordView *)arg2;
- (void)didBeginEditingPassword:(UITextField *)arg1 inView:(UIDocumentPasswordView *)arg2;
@end

