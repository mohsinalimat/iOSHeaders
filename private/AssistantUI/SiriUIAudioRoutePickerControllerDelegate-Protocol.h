//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class SiriUIAudioRoutePickerController;

@protocol SiriUIAudioRoutePickerControllerDelegate <NSObject>
- (void)routePickerControllerPickedNewRoute:(SiriUIAudioRoutePickerController *)arg1 isBluetooth:(_Bool)arg2;
- (void)routePickerController:(SiriUIAudioRoutePickerController *)arg1 hasRoutesToPick:(_Bool)arg2;
@end

