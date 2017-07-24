//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLService-Protocol.h>

@class NSString, PXCPLServiceStatus;
@protocol OS_dispatch_queue, PXCPLService;

@interface PXMockCPLService : NSObject <PXCPLService>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <PXCPLService> _cplService;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

+ (id)_mockEvent;
+ (_Bool)shouldUseMockService;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_serviceStatusDidChange:(id)arg1;
- (void)_deliverMockServiceStatus;
- (void)performAction:(long long)arg1;
- (_Bool)canPerformAction:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCPLService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

