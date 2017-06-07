//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/MSCLAudioPickerSourceViewController-Protocol.h>
#import <MediaSocial/MSCLAudioPlayerManagerDataSource-Protocol.h>
#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>

@class MSCLAudioPlayerManager, MSCLDurationFormatter, NSArray, NSDateFormatter, NSString, UITableView;

@interface MSCLAudioPickerVoiceMemosViewController : SKUIViewController <MSCLAudioPlayerManagerDataSource, UITableViewDataSource, UITableViewDelegate, MSCLAudioPickerSourceViewController>
{
    MSCLAudioPlayerManager *_audioPlayerManager;
    NSDateFormatter *_dateFormatter;
    MSCLDurationFormatter *_durationFormatter;
    NSArray *_recordings;
    CDUnknownBlockType _selectionBlock;
    UITableView *_tableView;
}

@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
- (void).cxx_destruct;
- (void)_stopAudioPlayer;
- (id)_recordings;
- (id)_durationFormatter;
- (id)_dateFormatter;
- (void)_playButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)audioPlayerManager:(id)arg1 playButtonForRepresentedObject:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

