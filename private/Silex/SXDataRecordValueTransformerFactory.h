//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDocumentController;

@interface SXDataRecordValueTransformerFactory : NSObject
{
    SXDocumentController *_documentController;
}

@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
- (void).cxx_destruct;
- (id)recordValueTransformerForDataDescriptor:(id)arg1;
- (id)initWithDocumentController:(id)arg1;

@end

