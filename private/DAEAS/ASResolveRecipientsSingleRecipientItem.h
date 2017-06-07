//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASResolveRecipientsAvailabilityItem, ASResolveRecipientsCertificatesItem, NSString;

@interface ASResolveRecipientsSingleRecipientItem : ASItem
{
    NSString *_emailAddress;
    ASResolveRecipientsCertificatesItem *_certificates;
    ASResolveRecipientsAvailabilityItem *_availability;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) ASResolveRecipientsAvailabilityItem *availability; // @synthesize availability=_availability;
@property(retain, nonatomic) ASResolveRecipientsCertificatesItem *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)description;

@end

