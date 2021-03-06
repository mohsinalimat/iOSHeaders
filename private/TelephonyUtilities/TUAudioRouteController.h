//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, TUAudioRoute, TUAudioSystemController, TUCall;
@protocol OS_dispatch_queue, TUCallContainerPrivate;

@interface TUAudioRouteController : NSObject
{
    id <TUCallContainerPrivate> _callContainer;
    TUAudioSystemController *_audioSystemController;
    NSHashTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    TUAudioRoute *_pickedRoute;
}

@property(retain, nonatomic) TUAudioRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) TUAudioSystemController *audioSystemController; // @synthesize audioSystemController=_audioSystemController;
@property(readonly, nonatomic) id <TUCallContainerPrivate> callContainer; // @synthesize callContainer=_callContainer;
- (void).cxx_destruct;
- (void)_audioRouteInformationChanged:(id)arg1;
- (void)_pickRoute:(id)arg1;
- (id)_pickableRoutesForCategory:(id)arg1 mode:(id)arg2;
- (id)_audioRoutesFromRouteDictionaries:(id)arg1;
- (id)_pickableRoutes;
@property(readonly, nonatomic) TUCall *callForPickableRoutes;
- (void)enumerateRoutesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isRouteAvailableForDeviceModelType:(long long)arg1;
@property(readonly, nonatomic, getter=isReceiverRoutePicked) _Bool receiverRoutePicked;
@property(readonly, nonatomic, getter=isSpeakerRoutePicked) _Bool speakerRoutePicked;
- (void)clearCachedRoutes;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (void)pickDefaultRoute;
- (void)pickReceiverRoute;
- (void)pickSpeakerRoute;
@property(readonly, nonatomic, getter=isReceiverRouteAvailable) _Bool receiverRouteAvailable;
@property(readonly, nonatomic, getter=isSpeakerRouteAvailable) _Bool speakerRouteAvailable;
@property(readonly, nonatomic) long long audioRoutesCount;
@property(readonly, nonatomic, getter=areAuxiliaryAudioRoutesAvailable) _Bool auxiliaryAudioRoutesAvailable;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithCallContainer:(id)arg1 audioSystemController:(id)arg2 queue:(id)arg3;

@end

