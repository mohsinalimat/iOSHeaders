//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;

@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest
{
    id <PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property(retain, nonatomic) id <PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;

@end

