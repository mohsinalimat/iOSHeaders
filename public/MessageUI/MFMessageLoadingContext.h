//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFCancelable-Protocol.h>

@class MFAttachmentManager, MFCancelationToken, MFMailMessage, MFMimeBody, MFMimePart, MFObservable, NSString;
@protocol MFObserver, MFScheduler;

@interface MFMessageLoadingContext : NSObject <MFCancelable>
{
    MFCancelationToken *_cancelable;
    MFObservable<MFObserver> *_inputObservable;
    MFObservable *_contentObservable;
    MFObservable *_smimeObservable;
    MFObservable *_analysisSuggestionsObservable;
    id <MFScheduler> _analysisScheduler;
    _Bool _shouldAnalyzeMessage;
    NSString *_eventUniqueID;
    NSString *_meetingName;
    NSString *_meetingStorePersistentID;
    NSString *_eventICSRepresentation;
    _Bool _hasLoadedSomeContent;
    _Bool _hasLoadedCompleteMessage;
    _Bool _hasLoadedBestAlternativePart;
    _Bool _outgoingMessage;
    _Bool _draftMessage;
    _Bool _editableMessage;
    MFMailMessage *_message;
    MFMimeBody *_messageBody;
    MFAttachmentManager *_attachmentManager;
    MFMimePart *_loadedPart;
    unsigned long long _contentOffset;
}

+ (unsigned long long)_nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;
@property(nonatomic) unsigned long long contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property(readonly, nonatomic, getter=isEditableMessage) _Bool editableMessage; // @synthesize editableMessage=_editableMessage;
@property(readonly, nonatomic, getter=isDraftMessage) _Bool draftMessage; // @synthesize draftMessage=_draftMessage;
@property(readonly, nonatomic, getter=isOutgoingMessage) _Bool outgoingMessage; // @synthesize outgoingMessage=_outgoingMessage;
@property(nonatomic) _Bool hasLoadedBestAlternativePart; // @synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart;
@property(nonatomic) _Bool hasLoadedCompleteMessage; // @synthesize hasLoadedCompleteMessage=_hasLoadedCompleteMessage;
@property(nonatomic) _Bool hasLoadedSomeContent; // @synthesize hasLoadedSomeContent=_hasLoadedSomeContent;
@property(retain, nonatomic, setter=_setAttachmentManager:) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(retain, nonatomic, setter=_setMessageBody:) MFMimeBody *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic, setter=_setMessage:) MFMailMessage *message; // @synthesize message=_message;
- (id)unsubscribeSuggestions;
- (id)suggestionsFromIndexableItem:(id)arg1;
- (id)analysisSuggestionsFromHTMLString:(id)arg1 hasLoadedCompleteBody:(_Bool)arg2;
- (id)concatenatedStringFromContent:(id)arg1;
- (void)processMeetingInvitations:(id)arg1;
- (void)assignAttachmentManagerToContent:(id)arg1;
- (id)_reallyLoad:(long long)arg1 shouldDownload:(_Bool)arg2;
- (void)_load:(long long)arg1;
- (void)load:(long long)arg1 scheduler:(id)arg2;
- (void)load:(long long)arg1;
- (id)addSMIMEObserver:(CDUnknownBlockType)arg1;
- (id)addContentAnalysisObserver:(CDUnknownBlockType)arg1;
- (id)addLoadObserver:(CDUnknownBlockType)arg1;
- (id)onScheduler:(id)arg1 addLoadObserver:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)_setupObservableStreams;
- (void)_setupMeetingData;
@property(readonly, copy) NSString *description;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2 analyzeMessage:(_Bool)arg3;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

