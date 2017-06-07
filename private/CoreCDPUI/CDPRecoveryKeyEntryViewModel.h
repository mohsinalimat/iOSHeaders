//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPRemoteDeviceSecretValidator;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyEntryViewModel : NSObject
{
    int _mode;
    CDPContext *_context;
    id <CDPRecoveryKeyValidator> _validator;
    CDPRemoteDeviceSecretValidator *_secretValidator;
    _Bool _shouldSuppressCancelButton;
    CDUnknownBlockType _completionHandler;
}

@property _Bool shouldSuppressCancelButton; // @synthesize shouldSuppressCancelButton=_shouldSuppressCancelButton;
@property(readonly) int mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)handleCancel;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recoveryKey;
- (id)placeholderText;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)footerLabelText;
- (id)footerButtonTitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;

@end

