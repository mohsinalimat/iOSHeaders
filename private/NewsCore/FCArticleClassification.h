//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCArticleClassification : NSObject
{
    NSString *_articleID;
    NSArray *_topics;
}

@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithArticleID:(id)arg1 topics:(id)arg2;

@end

