package com.example.codeofhell;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    TextView helloHeema;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        helloHeema = findViewById(R.id.heema);


    }

    public  void showCode(View view)
    {
        helloHeema.setText("Gk");
//        Toast.makeText(getApplicationContext(), "Hello", Toast.LENGTH_SHORT).show();
    }


}