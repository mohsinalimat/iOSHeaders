//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SKUIReportAConcernConfiguration : NSObject <NSCopying>
{
    NSURL *_reportConcernURL;
    long long _itemIdentifier;
    NSString *_reportConcernExplanation;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
    NSString *_privacyNote;
    NSArray *_reasons;
}

+ (id)configurationWithTemplateElement:(id)arg1;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectReasonSubtitle; // @synthesize selectReasonSubtitle=_selectReasonSubtitle;
@property(copy, nonatomic) NSString *selectReasonTitle; // @synthesize selectReasonTitle=_selectReasonTitle;
@property(copy, nonatomic) NSString *reportConcernExplanation; // @synthesize reportConcernExplanation=_reportConcernExplanation;
@property(nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSURL *reportConcernURL; // @synthesize reportConcernURL=_reportConcernURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

