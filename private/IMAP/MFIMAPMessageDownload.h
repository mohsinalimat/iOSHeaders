//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/MFIMAPCompoundDownload.h>

@class MFMessage, MFMimePart;
@protocol MFCollectingDataConsumer, MFDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload
{
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    unsigned int _allowsPartialDownloads:1;
    unsigned int _usingPartialDownloads:1;
    unsigned int _startedFetch:1;
    unsigned int _fetchingMessageContents:1;
    unsigned int _fetchingBodyText:1;
    unsigned int _doneAddingSubdownloads:1;
    unsigned int _fetchBodyData:1;
    id <MFDataConsumer> _headerFilter;
    id <MFCollectingDataConsumer> _headerConsumer;
    id <MFDataConsumer> _textFilter;
    id <MFCollectingDataConsumer> _textConsumer;
}

- (_Bool)fetchBodyData;
- (void)setFetchBodyData:(_Bool)arg1;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (_Bool)isComplete;
- (id)data;
- (void)setTopLevelPart:(id)arg1;
- (id)topLevelPart;
- (_Bool)partial;
- (void)setAllowsPartialDownloads:(_Bool)arg1;
- (_Bool)allowsPartialDownloads;
- (id)message;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

@end

