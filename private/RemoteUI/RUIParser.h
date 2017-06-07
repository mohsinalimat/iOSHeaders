//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteUI/NSXMLParserDelegate-Protocol.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSString, NSURL, NSXMLParser, RUIActionSignal, RUIAlertView, RUIObjectModel;
@protocol RUIParserDelegate;

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_accumulator;
    NSDictionary *_currentElementAttributes;
    RUIAlertView *_currentAlert;
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    RUIActionSignal *_actionSignal;
    NSURL *_baseURL;
    int _parserState;
    NSMutableArray *_elementStack;
    _Bool _foundXMLUI;
    _Bool _succeeded;
    NSData *_xmlData;
    NSError *_error;
    id <RUIParserDelegate> _delegate;
}

+ (id)rowWithAttributeDict:(id)arg1 delegate:(id)arg2 parent:(id)arg3;
+ (id)tableRowClassForElementName:(id)arg1;
+ (long long)textAlignmentForString:(id)arg1;
@property(nonatomic) __weak id <RUIParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(retain, nonatomic) NSData *xmlData; // @synthesize xmlData=_xmlData;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)_validateDocumentContent;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)_finalizeElement:(id)arg1;
- (void)_finalizeSection;
- (void)_finalizePinView;
- (void)_logDeprecation:(id)arg1 value:(id)arg2;
- (void)_addSectionWithAttributes:(id)arg1;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (id)_lastRow;
- (id)_lastPageCreateIfNeeded;
- (id)_newRowWithAttributeDict:(id)arg1;
- (id)_createAndAddPageWithAttributes:(id)arg1;
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;
- (id)actionSignal;
- (id)uiObjectModel;
- (void)dealloc;
- (id)initWithXML:(id)arg1;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 delegate:(id)arg3;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 style:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

