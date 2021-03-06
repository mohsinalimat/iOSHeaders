//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSExtension, NSUUID, UIViewController, _MXExtension, _MXSerialQueue;
@protocol _MXExtensionURLHandling;

@interface _MXExtensionService : NSObject
{
    _MXSerialQueue *_serialQueue;
    _Bool _didSendConnectionTerminationNotifcation;
    NSUUID *_connectionIdentifier;
    NSExtension *_realExtension;
    _MXExtension *_extensionProxy;
    unsigned long long _state;
    id <_MXExtensionURLHandling> _URLHandlingDelegate;
    struct UIViewController *_remoteViewController;
}

+ (id)extensionCompletionQueue;
@property(retain, nonatomic) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <_MXExtensionURLHandling> URLHandlingDelegate; // @synthesize URLHandlingDelegate=_URLHandlingDelegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _MXExtension *extensionProxy; // @synthesize extensionProxy=_extensionProxy;
@property(retain, nonatomic) NSExtension *realExtension; // @synthesize realExtension=_realExtension;
@property(retain, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (void).cxx_destruct;
- (int)processIdentifier;
- (id)description;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disconnectExtension;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(_Bool)arg1 Handler:(CDUnknownBlockType)arg2;
- (void)connectExtensionWithRemoteViewControllerNeeded:(_Bool)arg1 Handler:(CDUnknownBlockType)arg2;
- (void)connectUIExtensionWithHandler:(CDUnknownBlockType)arg1;
- (void)connectExtensionWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithExtensionProxy:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSUUID *serviceIdentifier;
- (id)extension;
- (void)cancel;
- (id)context;
- (id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2;
- (id)_errorForIntentVendorContext:(id)arg1;
- (id)_errorForIntent:(id)arg1;
- (id)intentResponseObserverProxy;
- (void)setIntentResponseObserverProxy:(id)arg1;
- (void)stopSendingUpdatesForIntent:(id)arg1;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)_completeOrCancelTransaction:(_Bool)arg1;
- (void)cancelTransactionDueToTimeout;
- (void)completeTransaction;
- (id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;

@end

