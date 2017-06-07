//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSAppDocumentControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSApplicationDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class JSValue, NSError, NSOperationQueue, NSString, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSIdentityProvider, VSPreferences, VSStateMachine;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate>
{
    _Bool _allowUI;
    id <VSApplicationControllerDelegate> _delegate;
    VSIdentityProvider *_identityProvider;
    VSStateMachine *_stateMachine;
    NSError *_delegateError;
    NSError *_onLaunchError;
    NSOperationQueue *_privateQueue;
    VSApplication *_application;
    VSApplicationControllerResponseHandler *_responseHandler;
    VSAppDocumentController *_appDocumentController;
    JSValue *_applicationReadyCallback;
    VSPreferences *_preferences;
}

+ (void)initialize;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain) NSError *onLaunchError; // @synthesize onLaunchError=_onLaunchError;
@property(retain) NSError *delegateError; // @synthesize delegateError=_delegateError;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_makeJavaScriptRequest;
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;
- (id)_javascriptShowUserInterfacePurposeForAuthenticationUserInterfacePurpose:(long long)arg1;
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_applicationLaunchParams;
- (id)_bootURL;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_notifyDidStart;
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyDidReceiveViewModelError:(id)arg1;
- (void)_notifyDidReceiveViewModel:(id)arg1;
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;
- (void)_beginAuthentication;
- (void)_presentDocument:(id)arg1;
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;
- (id)activeAppDocumentForApplication:(id)arg1;
- (id)launchParamsForApplication:(id)arg1;
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;
- (void)submitRequest:(id)arg1;
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 purpose:(long long)arg2;
- (void)stop;
- (void)start;
- (void)transitionToInvalidState;
- (void)transitionToNotifyingOfLaunchFailureState;
- (void)transitionToReadyState;
- (void)transitionToWaitingForBothLaunchCallbacksState;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

