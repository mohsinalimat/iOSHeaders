//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioResults : NSObject
{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    _Bool _allowRecording;
    _Bool _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    NSMutableArray *_secondaryPayloads;
}

@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) _Bool allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) _Bool allowRecording; // @synthesize allowRecording=_allowRecording;
@property(readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;
@property(nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property(nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
- (void)dealloc;
- (void)addSecondaryPayload:(int)arg1;
- (id)init;

@end

