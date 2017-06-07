//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFEmailSet, MFMailMessage, MFSparseMutable64IndexSet, NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MFMessageReferenceContext : NSObject
{
    unsigned int _libraryID;
    int _mailboxID;
    NSString *_sender;
    NSArray *_senderList;
    NSString *_to;
    NSArray *_toList;
    NSString *_cc;
    NSArray *_ccList;
    NSString *_bcc;
    NSArray *_bccList;
    MFMailMessage *_message;
    long long _messageIDHash;
    NSString *_subject;
    MFSparseMutable64IndexSet *_references;
    NSMutableDictionary *_messageIDsBySubject;
    long long _conversationIDHash;
    unsigned long long *_conversationFlagsRef;
    double _dateSentInterval;
}

@property(nonatomic) double dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property(nonatomic) unsigned long long *conversationFlagsRef; // @synthesize conversationFlagsRef=_conversationFlagsRef;
@property(nonatomic) long long conversationIDHash; // @synthesize conversationIDHash=_conversationIDHash;
@property(nonatomic) int mailboxID; // @synthesize mailboxID=_mailboxID;
@property(retain, nonatomic) NSMutableDictionary *messageIDsBySubject; // @synthesize messageIDsBySubject=_messageIDsBySubject;
@property(retain, nonatomic) MFSparseMutable64IndexSet *references; // @synthesize references=_references;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) long long messageIDHash; // @synthesize messageIDHash=_messageIDHash;
@property(nonatomic) unsigned int libraryID; // @synthesize libraryID=_libraryID;
@property(retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) MFEmailSet *participants;
@property(readonly, nonatomic) NSString *subjectWithoutPrefix;
@property(readonly, nonatomic) unsigned long long subjectPrefixLength;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(copy, nonatomic) NSString *bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *toList; // @synthesize toList=_toList;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void)dealloc;

@end
