const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no"><title>WiFi Config</title><link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet"></head><body><div class="container mt-5"><div class="row justify-content-center"><div class="col-md-6"><div class="card"><div class="card-header text-center"><h1>WiFi Config</h1></div><div class="card-body"><form action="/submit" method="post"><div class="form-group"><label for="ssid">SSID</label><input type="text" class="form-control" id="ssid" name="ssid" required></div><div class="form-group"><label for="password">Password</label><input type="password" class="form-control" id="password" name="password" required></div><button type="submit" class="btn btn-primary btn-block">Submit</button></form></div></div></div></div></div><script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script><script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.5.4/dist/umd/popper.min.js"></script><script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script></body></html>
)rawliteral";