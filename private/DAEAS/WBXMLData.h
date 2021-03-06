//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface WBXMLData : NSObject
{
    NSMutableData *_data;
    unsigned char _currentCodePage;
    _Bool _haveAppliedCurrentCodePage;
    NSMutableData *_stateStack;
}

- (void).cxx_destruct;
- (id)init;
@property(readonly, nonatomic) NSMutableData *data;
- (id)dataExpectCompleteData:(_Bool)arg1;
- (void)appendTag:(unsigned char)arg1 withByteArrayDataContent:(id)arg2;
- (void)appendTag:(unsigned char)arg1 withIntContent:(int)arg2;
- (void)appendTag:(unsigned char)arg1 withStringContentAsData:(id)arg2;
- (void)appendTag:(unsigned char)arg1 withStringContent:(id)arg2;
- (void)closeTag:(unsigned char)arg1;
- (void)openTag:(unsigned char)arg1;
- (void)appendEmptyTag:(unsigned char)arg1;
- (void)closeProspectiveTag:(unsigned char)arg1;
- (void)openProspectiveTag:(unsigned char)arg1;
- (void)switchToCodePage:(unsigned char)arg1;
- (unsigned char)currentCodePage;
- (void)renderProspectiveTags;
- (void)appendByteArrayData:(id)arg1;
- (void)appendInt:(int)arg1;
- (void)appendData:(id)arg1;
- (void)appendString:(id)arg1;
- (void)_applyCurrentCodePage;

@end

