//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSXMLParserDelegate-Protocol.h>

@class NSLocale, NSMutableArray, NSString;

@interface CSLEmailXMLDelegate : NSObject <NSXMLParserDelegate>
{
    _Bool _startEmail;
    _Bool _startSubject;
    _Bool _startBody;
    NSMutableArray *_emails;
    NSLocale *_locale;
    NSString *_currentSubject;
    NSString *_currentBody;
    NSString *_currentLabel;
}

@property(retain, nonatomic) NSString *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) NSString *currentBody; // @synthesize currentBody=_currentBody;
@property(retain, nonatomic) NSString *currentSubject; // @synthesize currentSubject=_currentSubject;
@property _Bool startBody; // @synthesize startBody=_startBody;
@property _Bool startSubject; // @synthesize startSubject=_startSubject;
@property _Bool startEmail; // @synthesize startEmail=_startEmail;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSMutableArray *emails; // @synthesize emails=_emails;
- (void).cxx_destruct;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

