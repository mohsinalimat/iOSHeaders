//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGraphicsRendererFormat.h>

@class NSDictionary, NSMutableData, NSURL;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat
{
    NSDictionary *_documentInfo;
    NSURL *_outputURL;
    NSMutableData *_pdfData;
}

@property(retain) NSMutableData *pdfData; // @synthesize pdfData=_pdfData;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(copy, nonatomic) NSDictionary *documentInfo; // @synthesize documentInfo=_documentInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

