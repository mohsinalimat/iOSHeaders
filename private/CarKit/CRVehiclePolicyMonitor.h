//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CRCarKitMonitoringClientService-Protocol.h>

@class NSData, NSXPCConnection;
@protocol CRVehiclePolicyMonitoring;

@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService>
{
    _Bool _monitoring;
    NSData *_vehicleCertificateSerial;
    id <CRVehiclePolicyMonitoring> _delegate;
    NSXPCConnection *_serviceConnection;
}

@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(nonatomic) __weak id <CRVehiclePolicyMonitoring> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *vehicleCertificateSerial; // @synthesize vehicleCertificateSerial=_vehicleCertificateSerial;
- (void).cxx_destruct;
- (void)willDisableCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)willEnableCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)monitoringConnection;
- (void)dealloc;
- (id)initWithVehicleCertificateSerial:(id)arg1;

@end

