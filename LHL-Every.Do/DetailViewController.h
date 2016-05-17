//
//  DetailViewController.h
//  LHL-Every.Do
//
//  Created by Asuka Nakagawa on 2016-05-17.
//  Copyright © 2016 Asuka Nakagawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

