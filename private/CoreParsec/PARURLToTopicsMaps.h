//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PARURLToTopicsMaps : NSObject
{
    NSString *_version;
    NSDictionary *_urlToTopicScores;
}

+ (id)responseFromJSON:(id)arg1;
@property(readonly, nonatomic) NSDictionary *urlToTopicScores; // @synthesize urlToTopicScores=_urlToTopicScores;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

