//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface CSLEmail : NSObject
{
    _Bool _bias;
    NSString *_subject;
    NSString *_body;
    NSString *_label;
    NSArray *_features;
    NSLocale *_locale;
}

@property _Bool bias; // @synthesize bias=_bias;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBody:(id)arg1 locale:(id)arg2;
- (id)initWithBody:(id)arg1 label:(id)arg2 locale:(id)arg3;
- (id)initWithSubject:(id)arg1 body:(id)arg2 locale:(id)arg3;
- (id)initWithSubject:(id)arg1 body:(id)arg2 label:(id)arg3 locale:(id)arg4;

@end

