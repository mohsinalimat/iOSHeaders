//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPPerson, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface IPMessage : NSObject
{
    NSMutableArray *_messageUnits;
    NSMutableDictionary *_keywordsDictionary;
    NSString *_lowercaseSubject;
    NSString *_identifier;
    NSString *_threadIdentifier;
    NSString *_subject;
    IPPerson *_sender;
    NSArray *_recipients;
    NSDate *_dateSent;
    NSString *_type;
    NSString *_htmlContent;
}

@property(retain) NSString *htmlContent; // @synthesize htmlContent=_htmlContent;
@property(retain, nonatomic) NSArray *messageUnits; // @synthesize messageUnits=_messageUnits;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) IPPerson *sender; // @synthesize sender=_sender;
@property(retain) NSString *subject; // @synthesize subject=_subject;
@property(retain) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)detectedKeywordsDictionary;
- (void)addDetectedKeyword:(id)arg1 classificationTypeIdentifier:(id)arg2;
@property(readonly) NSString *lowercaseSubject;
- (void)addMessageUnit:(id)arg1;
- (id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3;
- (id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2;
- (id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5;
- (id)initWithDateSent:(id)arg1 subject:(id)arg2;
- (id)initWithDateSent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 type:(id)arg6;
- (id)init;

@end

