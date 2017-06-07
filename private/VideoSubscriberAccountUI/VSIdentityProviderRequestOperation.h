//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, VSIdentityProviderController, VSIdentityProviderRequest, VSOptional;
@protocol VSIdentityProviderControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;
    VSIdentityProviderRequest *_request;
    id <VSIdentityProviderControllerDelegate> _controllerDelegate;
    VSOptional *_result;
    VSIdentityProviderController *_controller;
}

@property(retain, nonatomic) VSIdentityProviderController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(nonatomic) __weak id <VSIdentityProviderControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, copy, nonatomic) VSIdentityProviderRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1 request:(id)arg2;

@end

