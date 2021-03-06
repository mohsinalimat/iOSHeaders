//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject
{
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)enqueuePluginViewForReuse:(id)arg1;
- (void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2;
- (_Bool)_objectSupportsPluginViewReuse:(id)arg1;
- (id)_pointerKeyForPluginView:(id)arg1;
- (id)dequeuePluginViewForBalloonController:(id)arg1;
- (void)resetState;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

