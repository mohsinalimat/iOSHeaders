//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CKSpotlightSearchResult : NSObject
{
    NSString *_chatGUID;
    NSString *_messageGUID;
    NSString *_summary;
    NSDate *_messageDate;
}

@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(copy, nonatomic) NSString *chatGUID; // @synthesize chatGUID=_chatGUID;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4;

@end

